//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSlideShowTheme.h"

@interface WBSlideShowThemeClassicSecond : WBSlideShowTheme
{
}

- (void)themeInitialize;
- (id)audioPath;
- (double)configureFirstTypeSources:(id)arg1 startTime:(double)arg2 size:(struct CGSize)arg3 components:(id)arg4;
- (double)cycleTransitionWithSources:(id)arg1 startTime:(double)arg2 size:(struct CGSize)arg3 components:(id)arg4;
- (id)transitionTypeFirstFiltersMakeTranslationStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 scaleStart:(struct CGPoint)arg3 scaleEnd:(struct CGPoint)arg4 delay:(_Bool)arg5 size:(struct CGSize)arg6;
- (id)transitionTypeFirstFiltersMakeTranslationWithStart:(id)arg1 end:(id)arg2 scaleStart:(id)arg3 scaleEnd:(id)arg4 delay:(_Bool)arg5;
- (id)pointOfTranslaton;
- (id)transitionTypeFirstMakeScaleComponentWithScaleStart:(struct CGPoint)arg1 scaleEnd:(struct CGPoint)arg2 alphaStart:(double)arg3 alphaEnd:(double)arg4 delay:(_Bool)arg5 size:(struct CGSize)arg6;
- (id)transitionTypeFirstFiltersMakeScaleWithScaleStart:(id)arg1 scaleEnd:(id)arg2 alphaStart:(double)arg3 alphaEnd:(double)arg4 delay:(_Bool)arg5;

@end

