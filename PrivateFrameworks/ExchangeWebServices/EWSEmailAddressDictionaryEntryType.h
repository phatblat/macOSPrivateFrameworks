//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class NSString;

@interface EWSEmailAddressDictionaryEntryType : NSObject <XSDefinitionProvider>
{
    NSString *_Key;
    NSString *_contentString;
}

+ (id)definition;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(copy, nonatomic) NSString *Key; // @synthesize Key=_Key;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

