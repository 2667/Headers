//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAwemeBaseViewController.h"

#import "AWEDetailCommentInputViewDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEDetailCommentInputView, NSString, UIView;

@interface AWEAwemeDetailBaseViewController : AWEAwemeBaseViewController <UIGestureRecognizerDelegate, AWEUserMessage, AWEDetailCommentInputViewDelegate>
{
    AWEDetailCommentInputView *_commentInputView;
    UIView *_keyboarMaskView;
}

@property(retain, nonatomic) UIView *keyboarMaskView; // @synthesize keyboarMaskView=_keyboarMaskView;
@property(retain, nonatomic) AWEDetailCommentInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
- (void).cxx_destruct;
- (void)didFinishBindPhone;
- (void)setModel:(id)arg1;
- (void)setPureMode:(_Bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)layoutSubViews;
- (void)viewWillLayoutSubviews;
- (void)keyboarMaskViewTapped:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)commentInputViewShouldReturn:(id)arg1;
- (void)reset;
- (_Bool)commentInputViewShouldBeginEditing:(id)arg1;
- (void)commentInputView:(id)arg1 didChangeHeightWithDiff:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

