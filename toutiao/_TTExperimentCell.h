//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface _TTExperimentCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_resultLabel;
    UILabel *_rangeLabel;
}

+ (double)height;
@property(retain, nonatomic) UILabel *rangeLabel; // @synthesize rangeLabel=_rangeLabel;
@property(retain, nonatomic) UILabel *resultLabel; // @synthesize resultLabel=_resultLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)initDefaultViews;
- (id)initWithReuseIdentifier:(id)arg1;

@end
