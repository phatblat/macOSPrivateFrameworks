//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol _INPBIntentExecutionResult <NSObject>
@property(nonatomic) BOOL hasEncodingFormat;
@property(nonatomic) int encodingFormat;
@property(readonly, nonatomic) BOOL hasEncodedIntentResponse;
@property(copy, nonatomic) NSString *encodedIntentResponse;
@property(readonly, nonatomic) BOOL hasEncodedIntent;
@property(copy, nonatomic) NSString *encodedIntent;
- (int)StringAsEncodingFormat:(NSString *)arg1;
- (NSString *)encodingFormatAsString:(int)arg1;
@end
