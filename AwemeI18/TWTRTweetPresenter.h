//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TWTRTweetPresenter : NSObject
{
    unsigned long long _style;
}

+ (id)presenterForStyle:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)entityRangesSortedByPosition:(id)arg1;
- (id)entitiesForTweet:(id)arg1 types:(long long)arg2;
- (id)entityRangesForTweet:(id)arg1 types:(long long)arg2;
- (double)aspectRatioForMultiphotoDisplayOfTweet:(id)arg1;
- (double)aspectRatioForStyleFromAverageRatio:(double)arg1;
- (double)mediaAspectRatioForTweetWithSingleMediaEntity:(id)arg1;
- (double)mediaAspectRatioForTweet:(id)arg1;
- (id)stripWhitespaceFromText:(id)arg1;
- (id)stripCardEntity:(id)arg1 fromText:(id)arg2;
- (id)stripQuoteTweetURLForTweetID:(id)arg1 entities:(id)arg2 fromText:(id)arg3;
- (id)replaceDisplayURLs:(id)arg1 fromText:(id)arg2;
- (id)stripLastImage:(id)arg1 fromText:(id)arg2;
- (id)attributedTextForText:(id)arg1 withEntityRanges:(id)arg2;
- (id)textForTweet:(id)arg1;
- (id)retweetedByTextForRetweet:(id)arg1;
- (id)initWithTweetViewStyle:(unsigned long long)arg1;

@end

