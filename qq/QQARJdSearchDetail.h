//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, QQARRectangle;

@interface QQARJdSearchDetail : NSObject
{
    int _errorcode;
    NSString *_session_id;
    NSString *_errormsg;
    NSMutableArray *_jd_sku_item;
    NSString *_jd_more_url;
    QQARRectangle *_rectangle;
}

@property(retain, nonatomic) QQARRectangle *rectangle; // @synthesize rectangle=_rectangle;
@property(retain, nonatomic) NSString *jd_more_url; // @synthesize jd_more_url=_jd_more_url;
@property(retain, nonatomic) NSMutableArray *jd_sku_item; // @synthesize jd_sku_item=_jd_sku_item;
@property(retain, nonatomic) NSString *errormsg; // @synthesize errormsg=_errormsg;
@property(nonatomic) int errorcode; // @synthesize errorcode=_errorcode;
@property(retain, nonatomic) NSString *session_id; // @synthesize session_id=_session_id;
- (void).cxx_destruct;

@end

