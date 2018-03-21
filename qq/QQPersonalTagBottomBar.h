//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FTSGaussBlurMaskView, UIButton, UIImageView;

@interface QQPersonalTagBottomBar : UIView
{
    FTSGaussBlurMaskView *_blurMaskView;
    UIImageView *_backgroundView;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

+ (id)bottomBarWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) FTSGaussBlurMaskView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
- (void).cxx_destruct;
- (void)rightButtonAddTarget:(id)arg1 action:(SEL)arg2;
- (void)leftButtonAddTarget:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
