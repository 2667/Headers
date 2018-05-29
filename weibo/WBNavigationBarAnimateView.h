//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAAnimationGroup;

@interface WBNavigationBarAnimateView : UIView
{
    UIView *_animateView;
    CAAnimationGroup *_animationGroup;
}

@property(retain, nonatomic) CAAnimationGroup *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(retain, nonatomic) UIView *animateView; // @synthesize animateView=_animateView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)startAnimate;
- (void)stopAnimate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithAnimationView:(id)arg1 animation:(id)arg2;

@end

