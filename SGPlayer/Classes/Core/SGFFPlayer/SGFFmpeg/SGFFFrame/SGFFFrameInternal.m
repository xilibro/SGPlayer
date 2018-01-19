//
//  SGFFFrameInternal.m
//  SGPlayer
//
//  Created by Single on 2018/1/19.
//  Copyright © 2018年 single. All rights reserved.
//

#import "SGFFFrameInternal.h"
#import "SGFFAudioFrame.h"

@implementation SGFFFrameInternal

- (SGFFFrameType)type
{
    return SGFFFrameTypeUnkonwn;
}

- (SGFFTimebase)timebase {return SGFFTimebaseIdentity();}
- (long long)position {return 0;}
- (long long)duration {return 0;}
- (long long)size{return 0;}

- (SGFFAudioFrame *)audioFrame
{
    if ([self isKindOfClass:[SGFFAudioFrame class]])
    {
        return (SGFFAudioFrame *)self;
    }
    return nil;
}

@end
