//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQLightInteractionAnimationActor.h>

@class NSArray;

@interface QQLightInteractionXinsuiActor : QQLightInteractionAnimationActor
{
    NSArray *_surpriseImgs;
}

- (void).cxx_destruct;
- (void)showXinSuiSurprise;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)replay;
- (void)preloadSurpriseImgs;
- (id)initWithContainerLayer:(id)arg1 direction:(unsigned long long)arg2 Delegate:(id)arg3;

@end
