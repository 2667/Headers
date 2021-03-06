//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTUGCToolbarProtocol-Protocol.h"

@class NSString, SSThemedButton, TTUGCEmojiInputView;
@protocol TTUGCToolbarDelegate;

@interface TTUGCToolbar : SSThemedView <TTUGCToolbarProtocol>
{
    _Bool _banAtInput;
    _Bool _banHashtagInput;
    _Bool _banEmojiInput;
    _Bool _emojiInputViewVisible;
    id <TTUGCToolbarDelegate> _delegate;
    SSThemedView *_containerView;
    SSThemedView *_toolbarView;
    SSThemedButton *_keyboardButton;
    SSThemedButton *_atButton;
    SSThemedButton *_hashtagButton;
    SSThemedButton *_emojiButton;
    TTUGCEmojiInputView *_emojiInputView;
    struct CGPoint _toolbarViewOrigin;
}

@property(nonatomic) struct CGPoint toolbarViewOrigin; // @synthesize toolbarViewOrigin=_toolbarViewOrigin;
@property(retain, nonatomic) TTUGCEmojiInputView *emojiInputView; // @synthesize emojiInputView=_emojiInputView;
@property(retain, nonatomic) SSThemedButton *emojiButton; // @synthesize emojiButton=_emojiButton;
@property(retain, nonatomic) SSThemedButton *hashtagButton; // @synthesize hashtagButton=_hashtagButton;
@property(retain, nonatomic) SSThemedButton *atButton; // @synthesize atButton=_atButton;
@property(retain, nonatomic) SSThemedButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property(retain, nonatomic) SSThemedView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) SSThemedView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool emojiInputViewVisible; // @synthesize emojiInputViewVisible=_emojiInputViewVisible;
@property(nonatomic) _Bool banEmojiInput; // @synthesize banEmojiInput=_banEmojiInput;
@property(nonatomic) _Bool banHashtagInput; // @synthesize banHashtagInput=_banHashtagInput;
@property(nonatomic) _Bool banAtInput; // @synthesize banAtInput=_banAtInput;
@property(nonatomic) __weak id <TTUGCToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)markKeyboardAsVisible;
- (_Bool)endEditing:(_Bool)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)emojiAction:(id)arg1;
- (void)hashtagAction:(id)arg1;
- (void)atAction:(id)arg1;
- (void)keyboardAction:(id)arg1;
- (void)refreshButtonsUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

