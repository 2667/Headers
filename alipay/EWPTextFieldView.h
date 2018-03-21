//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "APPickerDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class EWPickerView, EWScrollViewController, NSArray, NSString, UILabel, UITableViewCell, UITextField;

@interface EWPTextFieldView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, APPickerDelegate, UITextFieldDelegate>
{
    UITextField *_textField;
    UIView *_pageView;
    long long _keyboardType;
    NSString *_unit;
    NSString *_unitTips;
    NSArray *_units;
    UITableViewCell *_cellView;
    UILabel *_unitSeparatorLine;
    UILabel *_unitView;
    EWPickerView *_pickerView;
    EWScrollViewController *_viewController;
}

@property(nonatomic) __weak EWScrollViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) EWPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UILabel *unitView; // @synthesize unitView=_unitView;
@property(retain, nonatomic) UILabel *unitSeparatorLine; // @synthesize unitSeparatorLine=_unitSeparatorLine;
@property(retain, nonatomic) UITableViewCell *cellView; // @synthesize cellView=_cellView;
@property(retain, nonatomic) NSArray *units; // @synthesize units=_units;
@property(retain, nonatomic) NSString *unitTips; // @synthesize unitTips=_unitTips;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) __weak UIView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)isLegitimate:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)selectedPickerView:(id)arg1;
- (void)cancelPickerView:(id)arg1;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)layoutSubviews;
- (void)doPressChooseUnitView:(id)arg1;
@property(retain, nonatomic) NSString *placeholder;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) NSString *title;
- (void)showPickerView;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
