//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@class NSData;

@interface NSString (ICNFMCRFC2047Support)
- (id)decodeMimeMessageIDList;
- (id)decodeMimeAddressList;
- (id)decodeMimeHeaderValueWithCharsetHint:(id)arg1 detectOtherEncodings:(BOOL)arg2 fromWindows:(BOOL)arg3;
- (id)encodedHeaderDataWithEncodingHint:(unsigned long long)arg1 encodingUsed:(unsigned long long *)arg2;
- (id)encodedHeaderDataWithEncodingHint:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSData *encodedHeaderData;
@end

