/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class NSString;

@interface WCProductMgr : MMService <MMService, PBMessageObserverDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)onServiceInit;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)handleSubmitMallFreeOrder:(id)order;
-(void)handleGetProductDiscountInfo:(id)info;
-(void)handleGetLastestExpressInfo:(id)info;
-(void)handleSubmitMallOrder:(id)order;
-(void)handleCancelPreOrder:(id)order;
-(void)handlePreSubmitOrder:(id)order;
-(void)handleGetProductDetail:(id)detail;
-(BOOL)submitMallFreeOrder:(id)order;
-(BOOL)submitMallNoFreeOrder:(id)order sellerID:(id)anId fromScene:(unsigned long)scene;
-(BOOL)submitMallOrder:(id)order fromScene:(unsigned long)scene;
-(BOOL)getProductDiscountInfo:(id)info jumpUrl:(id)url;
-(BOOL)getLastestExpressInfo:(id)info withStockID:(id)stockID withAddress:(id)address;
-(BOOL)cancelPreOrder:(id)order skuID:(id)anId count:(unsigned long)count URL:(id)url lockID:(id)anId5;
-(BOOL)preSubmitOrder:(id)order skuID:(id)anId count:(unsigned long)count URL:(id)url fromScene:(unsigned long)scene;
-(BOOL)getProductDetailFromScanQrcode:(id)scanQrcode;
-(BOOL)getProductDetail:(id)detail version:(unsigned long)version;
-(id)init;
@end

