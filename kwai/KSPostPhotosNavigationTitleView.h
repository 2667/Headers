//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray;

@interface KSPostPhotosNavigationTitleView : UIControl
{
    double _contentWidth;
    double _fullContentWidth;
    NSArray *_titleInfos;
    unsigned long long _selectedType;
    NSArray *_labels;
}

@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) unsigned long long selectedType; // @synthesize selectedType=_selectedType;
@property(readonly, nonatomic) NSArray *titleInfos; // @synthesize titleInfos=_titleInfos;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)updateSelectionWithLabel:(struct KSPostPhotosNavigationTitleLabel *)arg1;
- (id)initWithInfos:(id)arg1;

@end

