//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface TBTaoPasswordShareView : UIView
{
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UILabel *_taoPasswordLabel;
    UIImageView *_taoPasswordCopySuccessImageView;
    UIButton *_leftButton;
    UIButton *_rightButton;
    CDUnknownBlockType _leftButtonTapBlock;
    CDUnknownBlockType _rightButtonTapBlock;
}

+ (void)showTaoPasswordShareViewWithTaoPasswordShareItem:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType rightButtonTapBlock; // @synthesize rightButtonTapBlock=_rightButtonTapBlock;
@property(copy, nonatomic) CDUnknownBlockType leftButtonTapBlock; // @synthesize leftButtonTapBlock=_leftButtonTapBlock;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIImageView *taoPasswordCopySuccessImageView; // @synthesize taoPasswordCopySuccessImageView=_taoPasswordCopySuccessImageView;
@property(retain, nonatomic) UILabel *taoPasswordLabel; // @synthesize taoPasswordLabel=_taoPasswordLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)rightButtonTap:(id)arg1;
- (void)leftButtonTap:(id)arg1;
- (void)setupViewWithTaoPassShareItem:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (id)initWithItem:(id)arg1;

@end
