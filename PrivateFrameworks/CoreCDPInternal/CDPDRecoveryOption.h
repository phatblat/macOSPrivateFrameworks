//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CDPDRecoveryOption : NSObject
{
    NSString *_localizedRecoveryOption;
    CDUnknownBlockType _recoveryHandler;
    long long _recoveryOptionIndex;
}

@property(nonatomic) long long recoveryOptionIndex; // @synthesize recoveryOptionIndex=_recoveryOptionIndex;
@property(copy, nonatomic) CDUnknownBlockType recoveryHandler; // @synthesize recoveryHandler=_recoveryHandler;
@property(copy, nonatomic) NSString *localizedRecoveryOption; // @synthesize localizedRecoveryOption=_localizedRecoveryOption;
- (void).cxx_destruct;

@end

