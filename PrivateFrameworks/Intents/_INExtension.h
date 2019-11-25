//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INIntentHandlerProvidingPrivate.h"
#import "NSExtensionRequestHandling.h"

@class INExtensionContext, NSString;

@interface _INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProvidingPrivate>
{
    INExtensionContext *_extensionContext;
}

+ (void)initialize;
@property(readonly, nonatomic) INExtensionContext *_extensionContext; // @synthesize _extensionContext;
- (void).cxx_destruct;
- (id)handlerForIntent:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

