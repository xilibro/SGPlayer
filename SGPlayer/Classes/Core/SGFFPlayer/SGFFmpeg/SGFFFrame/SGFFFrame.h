//
//  SGFFFrame.h
//  SGPlayer
//
//  Created by Single on 2018/1/18.
//  Copyright © 2018年 single. All rights reserved.
//

#ifndef SGFFFrame_h
#define SGFFFrame_h


#import <Foundation/Foundation.h>
#import "SGFFTime.h"

@class SGFFAudioFrame;
@protocol SGFFFrameUtil;


typedef NS_ENUM(NSUInteger, SGFFFrameType)
{
    SGFFFrameTypeUnkonwn,
    SGFFFrameTypeVideo,
    SGFFFrameTypeAudio,
    SGFFFrameTypeSubtitle,
};


@protocol SGFFFrame <NSObject, SGFFFrameUtil>

- (SGFFFrameType)type;

- (SGFFTimebase)timebase;
- (long long)position;
- (long long)duration;
- (long long)size;

@end


@protocol SGFFFrameUtil <NSObject>

- (SGFFAudioFrame *)audioFrame;

@end


#endif /* SGFFFrame_h */
