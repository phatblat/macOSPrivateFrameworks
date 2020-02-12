//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBPunchout;

@protocol _SFPBUserReportRequest <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *userReportOptions;
@property(copy, nonatomic) NSString *dismissText;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *affordanceText;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)userReportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userReportOptionsCount;
- (void)addUserReportOptions:(_SFPBPunchout *)arg1;
- (void)clearUserReportOptions;
@end

