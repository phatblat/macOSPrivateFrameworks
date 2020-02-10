//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXExpressionParsingServing.h"

@class NSString;

@interface _SVXRemoteExpressionParsingService : NSObject <SVXExpressionParsingServing>
{
    id <SVXAceCommandHandling> _aceHandler;
}

@property(retain, nonatomic) id <SVXAceCommandHandling> aceHandler; // @synthesize aceHandler=_aceHandler;
- (void).cxx_destruct;
- (void)parseExpressions:(id)arg1 targetDevice:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithAceHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
