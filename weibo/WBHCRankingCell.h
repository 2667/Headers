//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHCRankingBaseCell.h"

@class NSDate, WBHCRankingLikeButton;

@interface WBHCRankingCell : WBHCRankingBaseCell
{
    WBHCRankingLikeButton *_likeButton;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)likeButtonPressed:(id)arg1;
- (void)setRankData:(id)arg1;
@property(readonly, nonatomic) WBHCRankingLikeButton *likeButton; // @synthesize likeButton=_likeButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

