//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWETableViewCell.h"

@class AWESettingSwitch, UIButton, UILabel;
@protocol AWESettingTableViewCellDelegate;

@interface AWESettingTableViewCell : AWETableViewCell
{
    id <AWESettingTableViewCellDelegate> _delegate;
    UILabel *_label;
    AWESettingSwitch *_aSwitch;
    UIButton *_button;
    unsigned long long _type;
}

+ (id)indentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) AWESettingSwitch *aSwitch; // @synthesize aSwitch=_aSwitch;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <AWESettingTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonDidPressed:(id)arg1;
- (void)switchDidChanged;
- (void)configWithButtonTitle:(id)arg1;
- (id)buttonOnCell;
- (id)switchOnCell;
- (void)configWithAdditionString:(id)arg1;
- (void)configWithSwitch:(_Bool)arg1;
- (void)configWithSwitch;
- (void)configWithString:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)setCellDelegate:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

