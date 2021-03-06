//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWELoginButton, AWELoginGradientView, AWETimeLockPasswordView, NSString, UILabel;

@interface AWETimeLockOnViewController : UIViewController
{
    AWELoginGradientView *_backgroundView;
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    AWETimeLockPasswordView *_passwordInputView;
    AWELoginButton *_nextBtn;
    NSString *_inputPassword;
    double _nextBtnBottomSpacing;
}

@property(nonatomic) double nextBtnBottomSpacing; // @synthesize nextBtnBottomSpacing=_nextBtnBottomSpacing;
@property(retain, nonatomic) NSString *inputPassword; // @synthesize inputPassword=_inputPassword;
@property(retain, nonatomic) AWELoginButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) AWETimeLockPasswordView *passwordInputView; // @synthesize passwordInputView=_passwordInputView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWELoginGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)nextBtnClicked;
- (void)adaptSubviews;
- (void)setupSubViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

