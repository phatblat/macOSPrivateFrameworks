//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID, PADescriptionEditController;

@interface PAOperationEditController : NSObject
{
    PADescriptionEditController *_descriptionEditController;
    NSUUID *_operationUUID;
}

@property(readonly) __weak PADescriptionEditController *descriptionEditController; // @synthesize descriptionEditController=_descriptionEditController;
@property(readonly) NSUUID *operationUUID; // @synthesize operationUUID=_operationUUID;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)remove;
- (void)endInteractiveChange;
- (void)beginInteractiveChange;
@property(readonly, getter=isInteractive) BOOL interactive;
@property(getter=isEnabled) BOOL enabled;
- (BOOL)enabled;
- (void)setOperation:(id)arg1;
- (void)setOperation:(id)arg1 changedForKey:(id)arg2 invalidMasterRect:(struct CGRect)arg3;
@property(readonly) NSString *operationIdentifier;
- (id)operation;
- (id)initWithDescriptionEditController:(id)arg1 operationUUID:(id)arg2;

@end

