//
//  SGFFOutput.h
//  SGPlayer
//
//  Created by Single on 2018/1/19.
//  Copyright © 2018年 single. All rights reserved.
//

#ifndef SGFFOutput_h
#define SGFFOutput_h


#import <Foundation/Foundation.h>
#import "SGFFFrame.h"
#import "SGFFOutputRender.h"


@protocol SGFFOutput;
@protocol SGFFOutputRenderSource;


typedef NS_ENUM(NSUInteger, SGFFOutputType)
{
    SGFFOutputTypeUnkonwn,
    SGFFOutputTypeVideo,
    SGFFOutputTypeAudio,
    SGFFOutputTypeSubtitle,
};


@protocol SGFFOutput <NSObject>

- (SGFFOutputType)type;

@property (nonatomic, weak) id <SGFFOutputRenderSource> renderSource;

- (id <SGFFOutputRender>)renderWithFrame:(id <SGFFFrame>)frame;
- (SGFFTime)currentTime;

@end

@protocol SGFFOutputRenderSource <NSObject>

- (id <SGFFOutputRender>)outputFecthRender:(id <SGFFOutput>)output;
- (id <SGFFOutputRender>)outputFecthRender:(id <SGFFOutput>)output positionHandler:(BOOL(^)(long long * current, long long * expect))positionHandler;

@end


#endif /* SGFFOutput_h */
