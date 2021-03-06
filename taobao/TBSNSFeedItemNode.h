//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, NSURL;

@interface TBSNSFeedItemNode : TBJSONModel
{
    NSString *_type;
    NSString *_picUrl;
    NSString *_detailUrl;
    unsigned long long _itemId;
    NSURL *_picUrlThumbnailL;
}

@property(retain, nonatomic) NSURL *picUrlThumbnailL; // @synthesize picUrlThumbnailL=_picUrlThumbnailL;
@property(nonatomic) unsigned long long itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getPicUrlT;
- (id)toJSONDictionary;
- (void)initWithJSONDictionary:(id)arg1 withWHRate:(int)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

