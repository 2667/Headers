//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface YXWeekStarLastAnimationMethod : NSObject
{
}

+ (id)offsetPath:(id)arg1 by:(struct CGPoint)arg2;
+ (id)alignToBottomPath:(id)arg1 layer:(id)arg2;
+ (void)addSublayersAnimationNeedReverse:(id)arg1 forKey:(id)arg2 forLayer:(id)arg3 reverseAnimation:(_Bool)arg4 totalDuration:(double)arg5;
+ (void)addSublayersAnimation:(id)arg1 forKey:(id)arg2 forLayer:(id)arg3;
+ (void)updateValueFromPresentationLayerForAnimation:(id)arg1 theLayer:(id)arg2;
+ (void)updateValueForAnimation:(id)arg1 theLayer:(id)arg2;
+ (void)updateValueFromAnimationsForLayers:(id)arg1;
+ (double)maxDurationOfEffectAnimation:(id)arg1 sublayersCount:(long long)arg2;
+ (double)maxDurationFromAnimations:(id)arg1;
+ (id)groupAnimations:(id)arg1 fillMode:(id)arg2;
+ (id)groupAnimations:(id)arg1 fillMode:(id)arg2 forEffectLayer:(_Bool)arg3 sublayersCount:(long long)arg4;
+ (id)reverseAnimation:(id)arg1 totalDuration:(double)arg2;

@end

