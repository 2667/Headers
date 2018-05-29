//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSTimer;

@interface WBNLFlyImageView : CALayer
{
    double _startPosDuration;
    double _pausePosDuration;
    int _offsetXTotal;
    double _moveEndX;
    NSTimer *_blastEffectTimer;
    struct CGPoint _blastEffectOffset;
    CDUnknownBlockType _blastEffectBlock;
}

+ (void)flyPoint:(CDUnknownBlockType)arg1;
+ (void)flyRedPoint:(CDUnknownBlockType)arg1;
+ (void)flyHeart:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType blastEffectBlock; // @synthesize blastEffectBlock=_blastEffectBlock;
- (void).cxx_destruct;
- (void)_blastEffectTimeUpdate:(id)arg1;
- (void)_addBlastEffectTimer;
- (double)_getDuration:(double)arg1 distance:(double)arg2 rate:(int)arg3;
- (int)_getRandom:(int)arg1;
- (id)_createLineOpacity:(double)arg1 opacityStart:(double)arg2 opacityEnd:(double)arg3;
- (id)_createPointEndAnimation:(struct CGPoint)arg1 p3:(struct CGPoint)arg2 p4:(struct CGPoint)arg3 scale:(double)arg4 duration:(double)arg5;
- (id)_createPointPauseAnimation:(struct CGPoint)arg1 scale:(double)arg2;
- (id)_createPointRiseAnimation:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (void)stopBlastEffectTimer;
- (id)createAnimation:(struct CGRect)arg1;
- (id)createPointAnimation:(struct CGPoint)arg1 end:(struct CGPoint)arg2 duration:(double)arg3 superViewFrame:(struct CGRect)arg4 offset:(struct CGPoint)arg5 scale:(double)arg6;
- (id)createLineWithColourAnimation:(struct CGPoint)arg1 end:(struct CGPoint)arg2 scale:(double)arg3 duration:(double)arg4 faceTo:(int)arg5 endScale:(double)arg6 channelNum:(int)arg7 minY:(int)arg8 maxY:(int)arg9 opacityStart:(double)arg10 opacityEnd:(double)arg11;
- (id)createLineAnimation:(struct CGPoint)arg1 end:(struct CGPoint)arg2 scale:(double)arg3 duration:(double)arg4 opacityStart:(double)arg5 opacityEnd:(double)arg6;
- (void)flyInLineWithColour:(struct CGPoint)arg1 end:(struct CGPoint)arg2 scale:(double)arg3 faceTo:(int)arg4 endScale:(double)arg5 channelNum:(int)arg6 minY:(int)arg7 maxY:(int)arg8 opacityStart:(double)arg9 opacityEnd:(double)arg10;
- (void)flyInLine:(struct CGPoint)arg1 end:(struct CGPoint)arg2 scale:(double)arg3 opacityStart:(double)arg4 opacityEnd:(double)arg5;
- (void)flyAtPoint:(struct CGPoint)arg1 end:(struct CGPoint)arg2 superViewFrame:(struct CGRect)arg3 scale:(double)arg4 height:(double)arg5 blastEffectBlock:(CDUnknownBlockType)arg6;
- (id)init;

@end

