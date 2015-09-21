//
//  CapitalMarketsOrder.h
//  AnyPresence SDK
//

/*!
 @header CapitalMarketsOrder
 @abstract CapitalMarketsOrder class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CapitalMarketsOrder
 @abstract Generated model object: CapitalMarketsOrder.
 @discussion Use @link //apple_ref/occ/cat/CapitalMarketsOrder(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CapitalMarketsOrder/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CapitalMarketsOrder : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CapitalMarketsOrder.
 @result Class representing the data source associated with a CapitalMarketsOrder.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var comments
 @abstract Generated model property: comments.
 */
@property (nonatomic, strong) NSString * comments;

/*!
 @var currency
 @abstract Generated model property: currency.
 */
@property (nonatomic, strong) NSString * currency;

/*!
 @var lastPrice
 @abstract Generated model property: last_price.
 */
@property (nonatomic, strong) NSNumber * lastPrice;

/*!
 @var lastQty
 @abstract Generated model property: last_qty.
 */
@property (nonatomic, strong) NSNumber * lastQty;

/*!
 @var price
 @abstract Generated model property: price.
 */
@property (nonatomic, strong) NSNumber * price;

/*!
 @var quantity
 @abstract Generated model property: quantity.
 */
@property (nonatomic, strong) NSNumber * quantity;

/*!
 @var side
 @abstract Generated model property: side.
 */
@property (nonatomic, strong) NSString * side;

/*!
 @var status
 @abstract Generated model property: status.
 */
@property (nonatomic, strong) NSString * status;

/*!
 @var symbol
 @abstract Generated model property: symbol.
 */
@property (nonatomic, strong) NSString * symbol;

/*!
 @var transactTime
 @abstract Generated model property: transact_time.
 */
@property (nonatomic, strong) NSString * transactTime;

@end
