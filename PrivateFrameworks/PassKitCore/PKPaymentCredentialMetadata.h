//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PKPaymentCredentialMetadata : NSObject
{
    NSString *_localizedDisplayName;
    NSString *_value;
}

+ (id)paymentCredentialMetadataWithConfiguration:(id)arg1;
+ (Class)classForValueType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
- (void).cxx_destruct;
- (id)displayString;
- (id)initWithConfiguration:(id)arg1;

@end

