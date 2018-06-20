//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNVCardLine, NSArray, NSData, NSString;

@protocol CNVCardLineSerialization <NSObject>
- (void)insertLine:(CNVCardLine *)arg1 atMarker:(id)arg2;
- (unsigned long long)estimatedDataLength;
- (id)insertionMarker;
- (void)serializeData:(NSData *)arg1;
- (void)serializeArray:(NSArray *)arg1 withItemSeparator:(NSString *)arg2;
- (void)serializeString:(NSString *)arg1;
- (BOOL)canSerializeData:(NSData *)arg1;
- (BOOL)canSerializeArray:(NSArray *)arg1;
- (BOOL)canSerializeString:(NSString *)arg1;
- (void)serializeVersionPlaceholder;
- (void)serializeOpaqueValue:(NSData *)arg1;
- (void)serializeLine:(CNVCardLine *)arg1;
@end

