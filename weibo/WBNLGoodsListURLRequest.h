//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLURLRequest.h"

@class NSString;

@interface WBNLGoodsListURLRequest : WBNLURLRequest
{
    NSString *_owner_id;
    NSString *_live_id;
    NSString *_page;
    NSString *_count;
}

@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *live_id; // @synthesize live_id=_live_id;
@property(copy, nonatomic) NSString *owner_id; // @synthesize owner_id=_owner_id;
- (void).cxx_destruct;
- (id)path;
- (id)parseResponseData:(id)arg1;

@end

