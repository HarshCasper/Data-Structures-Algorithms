let count=0;

function inc(){
	++count;
}
function dec(){
	--count;
}
const getCount = () => count;

module.exports = {
	
	inc,
	dec,
	getCount
};
