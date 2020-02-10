//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSDictionary, NSXMLElement;

@interface TSTAIUTCValue : NSObject <NSCopying>
{
    NSDate *_utcDate;
    NSDate *_taiDate;
    unsigned long long _modifiedJulianDay;
    double _constant;
    double _coefficient;
    unsigned long long _offset;
}

@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) double coefficient; // @synthesize coefficient=_coefficient;
@property(nonatomic) double constant; // @synthesize constant=_constant;
@property(nonatomic) unsigned long long modifiedJulianDay; // @synthesize modifiedJulianDay=_modifiedJulianDay;
@property(retain, nonatomic) NSDate *taiDate; // @synthesize taiDate=_taiDate;
@property(retain, nonatomic) NSDate *utcDate; // @synthesize utcDate=_utcDate;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *dictionary; // @dynamic dictionary;
@property(readonly, nonatomic) NSXMLElement *xmlElement; // @dynamic xmlElement;
- (id)initWithDictionary:(id)arg1;
- (id)initWithXMLNode:(id)arg1;
- (id)init;

@end
