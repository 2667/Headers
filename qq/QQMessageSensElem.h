//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface QQMessageSensElem : QQModel
{
    int _attribute;
    NSString *_cleanContent;
    NSString *_rawContent;
    NSString *_actualRawContent;
    struct _NSRange _rawRange;
    struct _NSRange _actualRawRange;
    struct _NSRange _hidenRange;
    struct _NSRange _actualHidenRange;
    NSString *_keyContent;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(nonatomic) struct _NSRange actualHidenRange; // @dynamic actualHidenRange;
@property(retain, nonatomic) NSString *actualRawContent; // @dynamic actualRawContent;
@property(nonatomic) struct _NSRange actualRawRange; // @dynamic actualRawRange;
@property(nonatomic) int attribute; // @dynamic attribute;
@property(retain, nonatomic) NSString *cleanContent; // @dynamic cleanContent;
@property(nonatomic) struct _NSRange hidenRange; // @dynamic hidenRange;
@property(retain, nonatomic) NSString *keyContent; // @dynamic keyContent;
@property(retain, nonatomic) NSString *rawContent; // @dynamic rawContent;
@property(nonatomic) struct _NSRange rawRange; // @dynamic rawRange;

@end

