//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLURLRequest.h"

@class NSString;

@interface WBNLUserURLRequest : WBNLURLRequest
{
    NSString *_open_id;
    NSString *_user_system;
    NSString *_live_id;
}

@property(copy, nonatomic) NSString *live_id; // @synthesize live_id=_live_id;
@property(copy, nonatomic) NSString *user_system; // @synthesize user_system=_user_system;
@property(copy, nonatomic) NSString *open_id; // @synthesize open_id=_open_id;
- (void).cxx_destruct;
- (id)path;
- (id)parseResponseData:(id)arg1;

@end

