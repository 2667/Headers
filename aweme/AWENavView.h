//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface AWENavView : UIView
{
    NSString *_title;
    CDUnknownBlockType _backAction;
    UILabel *_titleLabel;
    UIButton *_backButton;
}

@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType backAction; // @synthesize backAction=_backAction;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setBackButtonImage:(id)arg1;
- (void)setBackButtonImageColor:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)addDefaultConstraints;
- (void)_setupUI;
- (id)initWithTitle:(id)arg1 backAction:(CDUnknownBlockType)arg2;

@end
