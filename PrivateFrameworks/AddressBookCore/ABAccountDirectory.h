//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ABAccountDirectory : NSObject
{
    NSString *_identifier;
    NSString *_name;
    id <ABSearchOperationsFactory> _searchOperationsFactory;
}

@property(readonly) id <ABSearchOperationsFactory> searchOperationsFactory; // @synthesize searchOperationsFactory=_searchOperationsFactory;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 searchOperationsFactory:(id)arg3;

@end

