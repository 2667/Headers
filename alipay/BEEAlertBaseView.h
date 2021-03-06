//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIButton, UIResponder;

@interface BEEAlertBaseView : UIView
{
    _Bool _shouldAutorotate;
    _Bool _showAnimation;
    double _containerWidth;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIView *_customContentView;
    UIView *_containerView;
    UIView *_attachedView;
    CALayer *_vSeparateLine;
    CALayer *_hSeparateLine;
    CDUnknownBlockType _confirmHandle;
    CDUnknownBlockType _cancelHandle;
    UIResponder *_currentFirstResponder;
}

@property(nonatomic) __weak UIResponder *currentFirstResponder; // @synthesize currentFirstResponder=_currentFirstResponder;
@property(copy, nonatomic) CDUnknownBlockType cancelHandle; // @synthesize cancelHandle=_cancelHandle;
@property(copy, nonatomic) CDUnknownBlockType confirmHandle; // @synthesize confirmHandle=_confirmHandle;
@property(nonatomic) _Bool showAnimation; // @synthesize showAnimation=_showAnimation;
@property(retain, nonatomic) CALayer *hSeparateLine; // @synthesize hSeparateLine=_hSeparateLine;
@property(retain, nonatomic) CALayer *vSeparateLine; // @synthesize vSeparateLine=_vSeparateLine;
@property(nonatomic) _Bool shouldAutorotate; // @synthesize shouldAutorotate=_shouldAutorotate;
@property(retain, nonatomic) UIView *attachedView; // @synthesize attachedView=_attachedView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) double containerWidth; // @synthesize containerWidth=_containerWidth;
- (void).cxx_destruct;
- (void)notifyAccountDidExit:(id)arg1;
- (void)dismiss;
- (void)dismissWithClickedButtonIndex:(long long)arg1;
- (void)onCancel;
- (void)onConfirm;
- (long long)confirmBtnIndex;
- (void)addCancelButtonWithTitle:(id)arg1;
- (void)addButtonWithTitle:(id)arg1;
- (void)addCancelButtonWithTitle:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)show;
- (void)ajustLayout;
- (id)buildSeparateLine;
- (void)initContainerWidth;
- (id)init;

@end

