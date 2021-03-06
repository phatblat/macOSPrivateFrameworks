//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class NSSet;

@interface RDMastersInTrashChange : RDUndoRedoChange
{
    BOOL _putInTrash;
    unsigned short _reason;
    NSSet *_masterAddresses;
}

@property(readonly, nonatomic) unsigned short reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) BOOL putInTrash; // @synthesize putInTrash=_putInTrash;
@property(readonly, nonatomic) NSSet *masterAddresses; // @synthesize masterAddresses=_masterAddresses;
- (void).cxx_destruct;
- (void)redo;
- (void)undo;
- (id)description;
- (id)initWithMasterAddresses:(id)arg1 putInTrash:(BOOL)arg2 reason:(unsigned short)arg3;

@end

