//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface TBVideoTarget : QQModel
{
    NSString *_vid;
    NSString *_feed_id;
}

+ (id)createWithData:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *feed_id; // @synthesize feed_id=_feed_id;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void)dealloc;

@end

