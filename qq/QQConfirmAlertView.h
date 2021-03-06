//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SimpleAlertView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface QQConfirmAlertView : SimpleAlertView
{
    NSString *_confirmation;
    UILabel *_confirmationLabel;
    _Bool _checkBoxSelected;
    _Bool _withCheckBox;
    UIImageView *_checkBoxView;
    UIButton *_checkBoxClickArea;
    CDUnknownBlockType _buttonClickBlock;
}

- (void)cancelButtonClick:(id)arg1;
- (void)updateCheckBoxState;
- (void)layoutSubviews;
- (id)initWithOverlayImage:(id)arg1 contentBackground:(id)arg2 buttonNormalImage:(id)arg3 buttonHighlightImage:(id)arg4 title:(id)arg5 message:(id)arg6 confirmation:(id)arg7 checkBoxSelected:(_Bool)arg8 buttonArray:(id)arg9 buttonClickBlock:(CDUnknownBlockType)arg10;
- (id)initWithStyle:(int)arg1 title:(id)arg2 message:(id)arg3 confirmation:(id)arg4 checkBoxSelected:(_Bool)arg5 buttonArray:(id)arg6 buttonClickBlock:(CDUnknownBlockType)arg7;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType buttonClickBlock; // @dynamic buttonClickBlock;
@property(nonatomic) _Bool checkBoxSelected; // @dynamic checkBoxSelected;
@property(readonly, nonatomic) UIImageView *checkBoxView; // @dynamic checkBoxView;
@property(retain, nonatomic) NSString *confirmation; // @dynamic confirmation;
@property(readonly, nonatomic) UILabel *confirmationLabel; // @dynamic confirmationLabel;

@end

