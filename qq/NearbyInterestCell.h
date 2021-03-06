//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TightTableViewCell.h>

#import <QQMainProject/NearbyInterestTagViewDelegate-Protocol.h>

@class NSString, UIImageView, UILabel, UIView;

@interface NearbyInterestCell : TightTableViewCell <NearbyInterestTagViewDelegate>
{
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
    UIView *_separateView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadAppearance;
- (void)resetAccessibilityLabelTextWithEditing:(_Bool)arg1;
- (id)titleWithType:(unsigned int)arg1;
- (void)addInterestCollectDataWithType:(unsigned int)arg1 isTapInterestButton:(_Bool)arg2;
- (void)didSelectedInterestTagView:(id)arg1 tagInfo:(id)arg2;
- (void)configure:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

