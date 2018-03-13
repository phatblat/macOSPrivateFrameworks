//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol CNVCardSerializationStorage <NSObject>
- (void)insertString:(NSString *)arg1 atMarker:(id)arg2;
- (unsigned long long)estimatedDataLength;
- (id)insertionMarker;
- (unsigned long long)currentLength;
- (void)appendData:(NSData *)arg1;
- (void)appendString:(NSString *)arg1 usingEncoding:(unsigned long long)arg2;
- (void)appendFormat:(NSString *)arg1;
- (void)appendString:(NSString *)arg1;
@end

