//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray;

@interface AWEChallengeSearchListResponse : AWEBaseApiModel
{
    _Bool _isMatch;
    _Bool _hasMore;
    NSArray *_challengs;
    long long _cursor;
}

+ (id)challengsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isMatch; // @synthesize isMatch=_isMatch;
@property(retain, nonatomic) NSArray *challengs; // @synthesize challengs=_challengs;
- (void).cxx_destruct;

@end

