//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;

@interface WBProductInputView : UIView <UITextFieldDelegate>
{
    UITextField *textField;
    unsigned long long _editMode;
    CDUnknownBlockType _eventHandle;
}

@property(copy, nonatomic) CDUnknownBlockType eventHandle; // @synthesize eventHandle=_eventHandle;
@property(nonatomic) unsigned long long editMode; // @synthesize editMode=_editMode;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField;
- (void).cxx_destruct;
- (void)closeAllInputViews;
- (void)updatePlaceholder:(id)arg1;
- (void)updateValue:(id)arg1;
- (void)saveEdit:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)click:(id)arg1;
- (id)stringOfSize:(long long)arg1 source:(id)arg2;
- (long long)lenthOfString:(id)arg1;
- (void)textFieldEditChanged:(id)arg1;
- (float)fontSize;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 placeholder:(id)arg3 keyboard:(long long)arg4 showAccessory:(_Bool)arg5 showSpec:(_Bool)arg6 editMode:(unsigned long long)arg7 handle:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

