//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTBaseUserProfileCell.h"

@class SSThemedLabel, TTAccountPrivacyExtendModel, UISwitch;

@interface TTUserPrivatePhoneCell : TTBaseUserProfileCell
{
    UISwitch *_switchButton;
    SSThemedLabel *_titleLabel;
    TTAccountPrivacyExtendModel *_model;
}

@property(retain, nonatomic) TTAccountPrivacyExtendModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
- (void).cxx_destruct;
- (void)accountSwitchButtonDidTap:(id)arg1;
@property(readonly, nonatomic) _Bool privacyExtend;
- (void)reloadWithPrivacyExtendModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

