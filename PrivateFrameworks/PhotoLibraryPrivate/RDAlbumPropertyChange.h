//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class LiAddress, NSString, RDAlbum, RDFolder;

@interface RDAlbumPropertyChange : RDUndoRedoChange
{
    LiAddress *_albumAddress;
    LiAddress *_previousParentAddress;
    LiAddress *_nextParentAddress;
    unsigned char _changeType;
    unsigned short _reason;
    NSString *_previousName;
    NSString *_nextName;
    id _previousProperty;
    id _nextProperty;
}

@property(retain, nonatomic) id nextProperty; // @synthesize nextProperty=_nextProperty;
@property(retain, nonatomic) id previousProperty; // @synthesize previousProperty=_previousProperty;
@property(retain, nonatomic) NSString *nextName; // @synthesize nextName=_nextName;
@property(retain, nonatomic) NSString *previousName; // @synthesize previousName=_previousName;
@property(readonly, nonatomic) unsigned short reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;
- (id)description;
- (void)redo;
- (void)undo;
@property(retain, nonatomic) RDFolder *nextParentFolder;
@property(retain, nonatomic) RDFolder *previousParentFolder;
@property(readonly, nonatomic) RDAlbum *album;
- (id)initWithAlbum:(id)arg1 changeType:(unsigned char)arg2;

@end

