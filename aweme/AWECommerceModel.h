//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSArray;

@interface AWECommerceModel : AWEBaseApiModel
{
    AWEURLModel *_headerImageURL;
    NSArray *_commerceLinkList;
    NSArray *_challengeList;
}

+ (id)challengeListJSONTransformer;
+ (id)commerceLinkListJSONTransformer;
+ (id)headerImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *challengeList; // @synthesize challengeList=_challengeList;
@property(retain, nonatomic) NSArray *commerceLinkList; // @synthesize commerceLinkList=_commerceLinkList;
@property(retain, nonatomic) AWEURLModel *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
- (void).cxx_destruct;

@end

