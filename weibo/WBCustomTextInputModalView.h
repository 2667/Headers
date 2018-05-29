//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCustomModalView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UILabel, WBCustomModalViewTextField;
@protocol WBCustomTextInputModalViewDelegate;

@interface WBCustomTextInputModalView : WBCustomModalView <UITextFieldDelegate>
{
    UILabel *_textInputTitleLabel;
    WBCustomModalViewTextField *_textInputTextField;
    UILabel *_textInputPromptLabel;
    UIActivityIndicatorView *_textInputIndicatorView;
    _Bool _isContendScreenName;
    _Bool _showsTextInputPrompt;
    _Bool _inputTextFieldCouldEmpty;
    int _inputTextFieldMinLength;
    int _inputTextFieldMaxLength;
    UIButton *getScreenNameButton;
    id <WBCustomTextInputModalViewDelegate> _actionDelegate;
    UILabel *_getScreenNameButtonLabel;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _cancelBlock;
    NSString *_inputTextFieldMinLengthErrorMsg;
    NSString *_inputTextFieldMaxLengthErrorMsg;
}

@property(copy, nonatomic) NSString *inputTextFieldMaxLengthErrorMsg; // @synthesize inputTextFieldMaxLengthErrorMsg=_inputTextFieldMaxLengthErrorMsg;
@property(copy, nonatomic) NSString *inputTextFieldMinLengthErrorMsg; // @synthesize inputTextFieldMinLengthErrorMsg=_inputTextFieldMinLengthErrorMsg;
@property(nonatomic) int inputTextFieldMaxLength; // @synthesize inputTextFieldMaxLength=_inputTextFieldMaxLength;
@property(nonatomic) int inputTextFieldMinLength; // @synthesize inputTextFieldMinLength=_inputTextFieldMinLength;
@property(nonatomic) _Bool inputTextFieldCouldEmpty; // @synthesize inputTextFieldCouldEmpty=_inputTextFieldCouldEmpty;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(retain, nonatomic) UIActivityIndicatorView *textInputIndicatorView; // @synthesize textInputIndicatorView=_textInputIndicatorView;
@property(retain, nonatomic) UILabel *textInputPromptLabel; // @synthesize textInputPromptLabel=_textInputPromptLabel;
@property(retain, nonatomic) WBCustomModalViewTextField *textInputTextField; // @synthesize textInputTextField=_textInputTextField;
@property(retain, nonatomic) UILabel *getScreenNameButtonLabel; // @synthesize getScreenNameButtonLabel=_getScreenNameButtonLabel;
@property(retain, nonatomic) UILabel *textInputTitleLabel; // @synthesize textInputTitleLabel=_textInputTitleLabel;
@property(nonatomic) _Bool showsTextInputPrompt; // @synthesize showsTextInputPrompt=_showsTextInputPrompt;
@property(nonatomic) __weak id <WBCustomTextInputModalViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) UIButton *getScreenNameButton; // @synthesize getScreenNameButton;
- (void).cxx_destruct;
- (void)getScreenNameButtonMethod:(id)arg1;
- (void)drawCursomViewBasedOnRect:(struct CGRect)arg1;
- (struct CGSize)customViewSizeBasedOnMaxWidth:(double)arg1;
- (struct CGSize)buttonsAreaSize_SideBySide;
- (struct CGSize)titleLabelSize;
- (struct CGSize)recalcSizeAndLayout:(_Bool)arg1;
- (double)width;
- (id)backgroundImage;
- (long long)addConfirmButton;
- (long long)addCancelButton;
- (void)initButtons;
- (void)dealloc;
- (void)dismiss;
- (void)textFieldChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)isEnableConfrimButton:(_Bool)arg1;
- (_Bool)buttonClickedOnIndex:(long long)arg1;
- (void)showError:(id)arg1;
- (void)showInfo:(id)arg1;
- (void)initInputedText:(id)arg1;
- (id)inputedText;
- (void)setTextFieldPlaceHolder:(id)arg1;
- (void)show;
- (_Bool)isDefaultSkin;
- (id)initWithTitle:(id)arg1 placeholder:(id)arg2;
- (id)initWithTitle:(id)arg1 placeholder:(id)arg2 IsContendScreenName:(_Bool)arg3;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

