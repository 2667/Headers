//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UITextField;

@interface TextInputCustomView : UIView
{
    long long _textInputViewKeyboardType;
    UILabel *_titleLabel;
    UITextField *_inputTextField;
}

@property(retain, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long textInputViewKeyboardType; // @synthesize textInputViewKeyboardType=_textInputViewKeyboardType;
- (void).cxx_destruct;
- (_Bool)containTextField:(id)arg1;
- (void)ti_resignFirstResponder;
- (id)inputText;
- (void)ti_addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)setInputTextFieldText:(id)arg1;
- (void)setTitle:(id)arg1 placeholder:(id)arg2;
- (id)init;

@end

