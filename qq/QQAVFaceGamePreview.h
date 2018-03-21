//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>

@class NSString, UIImageView;

@interface QQAVFaceGamePreview : UIView <CAAnimationDelegate>
{
    int _faceIndex;
    int _faceId;
    UIImageView *_redbagView;
}

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopRedBagAnimation;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)startRedBagAnimation;
- (void)onFaceMiss;
- (long long)tagId:(int)arg1;
- (void)stopGameAnimation;
- (void)creatEmoji:(int)arg1;
- (void)startGameAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
