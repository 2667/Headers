//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HTSLiveAudienceModel, UIImageView, UILabel;

@interface HTSLiveAudienceTableViewCell : UITableViewCell
{
    HTSLiveAudienceModel *_model;
    UILabel *_rankLabel;
    UIImageView *_avatorImageView;
    UILabel *_nameLabel;
    UILabel *_contributedLabel;
    UIImageView *_honorImageView;
}

@property(retain, nonatomic) UIImageView *honorImageView; // @synthesize honorImageView=_honorImageView;
@property(retain, nonatomic) UILabel *contributedLabel; // @synthesize contributedLabel=_contributedLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
- (void).cxx_destruct;
- (void)pr_setup;
- (void)updateWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

